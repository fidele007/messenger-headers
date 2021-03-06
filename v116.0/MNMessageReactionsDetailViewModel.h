/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBMMessageKey, UIColor;

@interface MNMessageReactionsDetailViewModel : FBValueObject <NSCopying> {

	unsigned long long _allReactionsCount;
	unsigned long long _numberOfTabs;
	NSArray* _reactionCountByReaction;
	FBMMessageKey* _messageKey;
	UIColor* _themeColor;

}

@property (nonatomic,readonly) unsigned long long allReactionsCount;                //@synthesize allReactionsCount=_allReactionsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTabs;                     //@synthesize numberOfTabs=_numberOfTabs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reactionCountByReaction;              //@synthesize reactionCountByReaction=_reactionCountByReaction - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                     //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                           //@synthesize themeColor=_themeColor - In the implementation block
-(unsigned long long)allReactionsCount;
-(NSArray *)reactionCountByReaction;
-(unsigned long long)numberOfTabs;
-(id)initWithAllReactionsCount:(unsigned long long)arg1 numberOfTabs:(unsigned long long)arg2 reactionCountByReaction:(id)arg3 messageKey:(id)arg4 themeColor:(id)arg5 ;
-(UIColor *)themeColor;
-(FBMMessageKey *)messageKey;
@end

