/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
-(UIColor *)themeColor;
-(FBMMessageKey *)messageKey;
-(unsigned long long)allReactionsCount;
-(NSArray *)reactionCountByReaction;
-(unsigned long long)numberOfTabs;
-(id)initWithAllReactionsCount:(unsigned long long)arg1 numberOfTabs:(unsigned long long)arg2 reactionCountByReaction:(id)arg3 messageKey:(id)arg4 themeColor:(id)arg5 ;
@end

