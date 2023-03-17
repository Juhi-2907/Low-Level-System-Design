export class LogProcessor {
   public static INFO = 1;
   public  static DEBUG = 2;
   public  static ERROR = 3;

    nextLogProcessor : LogProcessor | null;

   constructor(nextLog:LogProcessor | null){
        this.nextLogProcessor=nextLog;
    }
    log(logLevel : number, message:string){
        if(this.nextLogProcessor !== null){
            this.nextLogProcessor.log(logLevel,message);
        }
    }
}