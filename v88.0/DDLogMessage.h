/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface DDLogMessage : NSObject {

	int logLevel;
	int logFlag;
	int logContext;
	NSString* logMsg;
	NSDate* timestamp;
	const char* file;
	const char* className;
	const char* function;
	int lineNumber;
	unsigned machThreadID;
	char threadName[65];
	NSString* logTag;
	char* queueLabel;
	NSString* threadID;
	NSString* fileName;
	NSString* methodName;
	NSString* classNameNSString;
	NSString* threadNameNSString;

}
-(id)methodName;
-(id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(const char*)arg6 className:(const char*)arg7 function:(const char*)arg8 line:(int)arg9 ;
-(id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 className:(const char*)arg6 function:(const char*)arg7 line:(int)arg8 ;
-(id)threadName;
-(void)dealloc;
-(id)className;
-(id)threadID;
-(id)fileName;
@end

