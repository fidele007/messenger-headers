/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBFriendCenterIntentTarget : FBIntentTarget {

	NSString* _tab;

}

@property (nonatomic,copy,readonly) NSString * tab;              //@synthesize tab=_tab - In the implementation block
+(id)friendCenterTargetWithTab:(id)arg1 ;
-(id)fallbackURLs;
-(NSString *)tab;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

