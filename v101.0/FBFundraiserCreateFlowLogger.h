/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFundraiserLogger.h>

@class NSString;

@interface FBFundraiserCreateFlowLogger : FBFundraiserLogger {

	NSString* _source;

}

@property (nonatomic,copy,readonly) NSString * source;              //@synthesize source=_source - In the implementation block
-(id)initWithCreateFlowSessionID:(id)arg1 source:(id)arg2 fundraiserID:(id)arg3 analyticsModule:(id)arg4 ;
-(NSString *)source;
@end

