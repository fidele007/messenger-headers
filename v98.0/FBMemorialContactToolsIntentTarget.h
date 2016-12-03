/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBMemorialContactToolsIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _memorializedPersonShortName;
	NSString* _memorialContactName;
	NSString* _gender;

}

@property (nonatomic,copy,readonly) NSString * FBID;                                     //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * memorializedPersonShortName;              //@synthesize memorializedPersonShortName=_memorializedPersonShortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * memorialContactName;                      //@synthesize memorialContactName=_memorialContactName - In the implementation block
@property (nonatomic,copy,readonly) NSString * gender;                                   //@synthesize gender=_gender - In the implementation block
+(id)memorialContactToolsTargetWithFBID:(id)arg1 memorializedPersonShortName:(id)arg2 memorialContactName:(id)arg3 gender:(id)arg4 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(NSString *)memorializedPersonShortName;
-(NSString *)memorialContactName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)gender;
@end

