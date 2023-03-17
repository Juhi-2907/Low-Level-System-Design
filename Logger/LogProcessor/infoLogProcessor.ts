import { LogProcessor } from "./logProcessor";

export class InfoLogProcessor extends LogProcessor {
    constructor(nextLog:LogProcessor| null){
       super(nextLog);
    }
    log(logLevel : number, message:string){
        if(logLevel === LogProcessor.INFO){
            console.log(`INFO: ${message}`);
        }
        super.log(logLevel,message);
    }
}