import { LogProcessor } from "./LogProcessor/logProcessor";
import { InfoLogProcessor } from "./LogProcessor/infoLogProcessor";
import { DebugLogProcessor } from "./LogProcessor/debugLogProcessor";
import { ErrorLogProcessor } from "./LogProcessor/errorLogProcessor";

function logger(){
    const infoLogProcessor  = new InfoLogProcessor(new DebugLogProcessor(new ErrorLogProcessor(null)));
    infoLogProcessor.log(LogProcessor.INFO,"I am information");
    infoLogProcessor.log(LogProcessor.DEBUG,"I am debug");
    infoLogProcessor.log(LogProcessor.ERROR,"I am error");
    infoLogProcessor.log(4,"I am unknown");
}

logger();