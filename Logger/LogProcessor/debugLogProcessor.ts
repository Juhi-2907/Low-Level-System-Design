import { LogProcessor } from "./logProcessor";

export class DebugLogProcessor extends LogProcessor {
    constructor(nextLog:LogProcessor| null){
       super(nextLog);
    }
    log(logLevel : number, message:string){
        if(logLevel === LogProcessor.DEBUG){
            console.log(`DEBUG: ${message}`);
        }
        super.log(logLevel,message);
    }
}