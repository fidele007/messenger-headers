/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFundraiserLogger.h>

@class NSString;

@interface FBFundraiserCreateFlowLogger : FBFundraiserLogger {

	NSString* _sessionID;
	NSString* _source;

}

@property (nonatomic,copy,readonly) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                 //@synthesize source=_source - In the implementation block
-(id)initWithCreateFlowSessionID:(id)arg1 source:(id)arg2 fundraiserID:(id)arg3 analyticsModule:(id)arg4 ;
-(NSString *)source;
-(NSString *)sessionID;
@end

