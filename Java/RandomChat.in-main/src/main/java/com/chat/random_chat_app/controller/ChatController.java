package com.chat.random_chat_app.controller;

import org.springframework.messaging.handler.annotation.MessageMapping;
import org.springframework.messaging.handler.annotation.SendTo;
import org.springframework.stereotype.Controller;

import com.chat.random_chat_app.model.ChatMessage;
import org.springframework.web.bind.annotation.GetMapping;


@Controller
public class ChatController {

    @MessageMapping("/sendMessage")
    @SendTo("/topic/messages")
    public ChatMessage SendMessage (ChatMessage message){
        return message;
    }

    @GetMapping("chat")
    public String chat() {
        return "chat";
    }
    
}
