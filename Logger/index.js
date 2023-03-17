"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var logProcessor_1 = require("./LogProcessor/logProcessor");
var infoLogProcessor_1 = require("./LogProcessor/infoLogProcessor");
var debugLogProcessor_1 = require("./LogProcessor/debugLogProcessor");
var errorLogProcessor_1 = require("./LogProcessor/errorLogProcessor");
function logger() {
    var infoLogProcessor = new infoLogProcessor_1.InfoLogProcessor(new debugLogProcessor_1.DebugLogProcessor(new errorLogProcessor_1.ErrorLogProcessor(null)));
    infoLogProcessor.log(logProcessor_1.LogProcessor.INFO, "I am information");
    infoLogProcessor.log(logProcessor_1.LogProcessor.DEBUG, "I am debug");
    infoLogProcessor.log(logProcessor_1.LogProcessor.ERROR, "I am error");
    infoLogProcessor.log(4, "I am unknown");
}
logger();
