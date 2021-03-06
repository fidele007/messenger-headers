/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemPage;

@interface FBPageIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _initialTabName;

}

@property (nonatomic,readonly) FBMemPage * page; 
@property (nonatomic,copy,readonly) NSString * FBID;                        //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialTabName;              //@synthesize initialTabName=_initialTabName - In the implementation block
+(id)pageTargetWithFBID:(id)arg1 ;
+(id)pageTargetWithPage:(id)arg1 ;
+(id)pageTargetWithFBID:(id)arg1 initialTabName:(id)arg2 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(NSString *)initialTabName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemPage *)page;
@end

