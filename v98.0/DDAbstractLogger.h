/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/DDLogger.h>

@protocol DDLogFormatter, OS_dispatch_queue;
@class NSObject, NSString;

@interface DDAbstractLogger : NSObject <DDLogger> {

	id<DDLogFormatter> formatter;
	NSObject*<OS_dispatch_queue> loggerQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)logFormatter;
-(void)setLogFormatter:(id)arg1 ;
-(id)loggerQueue;
-(id)loggerName;
-(void)dealloc;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end
