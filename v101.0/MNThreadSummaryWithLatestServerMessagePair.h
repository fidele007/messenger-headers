/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, FBMMessage;

@interface MNThreadSummaryWithLatestServerMessagePair : FBValueObject <NSCopying> {

	FBMThreadSummary* _summary;
	FBMMessage* _latestServerMessage;

}

@property (nonatomic,copy,readonly) FBMThreadSummary * summary;                    //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) FBMMessage * latestServerMessage;              //@synthesize latestServerMessage=_latestServerMessage - In the implementation block
-(FBMMessage *)latestServerMessage;
-(id)initWithSummary:(id)arg1 latestServerMessage:(id)arg2 ;
-(FBMThreadSummary *)summary;
@end

