"use strict";
var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
Object.defineProperty(exports, "__esModule", { value: true });
exports.InfoLogProcessor = void 0;
var logProcessor_1 = require("./logProcessor");
var InfoLogProcessor = /** @class */ (function (_super) {
    __extends(InfoLogProcessor, _super);
    function InfoLogProcessor(nextLog) {
        return _super.call(this, nextLog) || this;
    }
    InfoLogProcessor.prototype.log = function (logLevel, message) {
        if (logLevel === logProcessor_1.LogProcessor.INFO) {
            console.log("INFO: ".concat(message));
        }
        _super.prototype.log.call(this, logLevel, message);
    };
    return InfoLogProcessor;
}(logProcessor_1.LogProcessor));
exports.InfoLogProcessor = InfoLogProcessor;
