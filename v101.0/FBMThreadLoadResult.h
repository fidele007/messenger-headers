/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, FBMIndexedMessageSet;

@interface FBMThreadLoadResult : FBValueObject <NSCopying> {

	FBMThreadSummary* _summary;
	FBMIndexedMessageSet* _messageSet;

}

@property (nonatomic,copy,readonly) FBMThreadSummary * summary;                     //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) FBMIndexedMessageSet * messageSet;              //@synthesize messageSet=_messageSet - In the implementation block
-(FBMIndexedMessageSet *)messageSet;
-(id)initWithSummary:(id)arg1 messageSet:(id)arg2 ;
-(FBMThreadSummary *)summary;
@end

