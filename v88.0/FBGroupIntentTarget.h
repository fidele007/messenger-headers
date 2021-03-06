/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemGroup, NSArray;

@interface FBGroupIntentTarget : FBIntentTarget {

	NSString* _FBID;

}

@property (nonatomic,readonly) FBMemGroup * group; 
@property (nonatomic,copy,readonly) NSArray * hoistedStoryIDs; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,copy,readonly) NSString * FBID;                        //@synthesize FBID=_FBID - In the implementation block
+(id)groupTargetWithFBID:(id)arg1 hoistedStoryIDs:(id)arg2 source:(long long)arg3 ;
+(id)groupTargetWithFBID:(id)arg1 ;
+(id)groupTargetWithGroup:(id)arg1 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(NSArray *)hoistedStoryIDs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)source;
-(FBMemGroup *)group;
@end

