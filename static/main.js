document.addEventListener("DOMContentLoaded", function () {
  const chatBody = document.getElementById("chatBody");
  const chatInput = document.getElementById("chatInput");
  const sendBtn = document.getElementById("sendBtn");

  function addMessage(text, sender = "user") {
    const msg = document.createElement("div");
    msg.className = sender === "user" ? "user-msg" : "bot-msg";
    msg.textContent = text;
    chatBody.appendChild(msg);
    chatBody.scrollTop = chatBody.scrollHeight;
  }

  async function handleSend() {
    const text = chatInput.value.trim();
    if (text !== "") {
      addMessage(text, "user");
      chatInput.value = "";

      try {
        const response = await fetch("/get_response", {
          method: "POST",
          headers: { "Content-Type": "application/json" },
          body: JSON.stringify({ message: text })
        });

        const data = await response.json();
        addMessage(data.response, "bot");
      } catch (error) {
        addMessage("Error: Could not reach backend.", "bot");
        console.error(error);
      }
    }
  }

  sendBtn.addEventListener("click", handleSend);
  chatInput.addEventListener("keypress", function (e) {
    if (e.key === "Enter") {
      handleSend();
    }
  });
});