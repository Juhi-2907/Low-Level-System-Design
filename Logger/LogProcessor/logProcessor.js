"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.LogProcessor = void 0;
var LogProcessor = exports.LogProcessor = /** @class */ (function () {
    function LogProcessor(nextLog) {
        this.nextLogProcessor = nextLog;
    }
    LogProcessor.prototype.log = function (logLevel, message) {
        if (this.nextLogProcessor !== null) {
            this.nextLogProcessor.log(logLevel, message);
        }
    };
    LogProcessor.INFO = 1;
    LogProcessor.DEBUG = 2;
    LogProcessor.ERROR = 3;
    return LogProcessor;
}());
