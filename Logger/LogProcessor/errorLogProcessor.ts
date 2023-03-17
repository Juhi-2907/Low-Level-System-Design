import { LogProcessor } from "./logProcessor";

export class ErrorLogProcessor extends LogProcessor {
    constructor(nextLog:LogProcessor| null){
       super(nextLog);
    }
    log(logLevel : number, message:string){
        if(logLevel === LogProcessor.ERROR){
            console.log(`ERROR: ${message}`);
        }
        super.log(logLevel,message);
    }
}