/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSURL, MNBusinessButtonAttribution, FBMemExternalUrl, NSArray;

@interface FBURLIntentTarget : FBIntentTarget {

	NSURL* _URL;

}

@property (nonatomic,readonly) double browserDisplayHeightRatio; 
@property (nonatomic,readonly) double actionTriggeredTime; 
@property (nonatomic,copy,readonly) MNBusinessButtonAttribution * attribution; 
@property (nonatomic,readonly) FBMemExternalUrl * externalURL; 
@property (nonatomic,copy,readonly) NSArray * browserSurfaces; 
@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
+(id)URLTargetForURL:(id)arg1 ;
+(id)URLTargetForURL:(id)arg1 browserDisplayHeightRatio:(double)arg2 actionTriggeredTime:(double)arg3 attribution:(id)arg4 ;
+(id)URLTargetForURL:(id)arg1 browserSurfaces:(id)arg2 ;
+(id)URLTargetWithExternalURL:(id)arg1 ;
-(double)actionTriggeredTime;
-(double)browserDisplayHeightRatio;
-(id)fallbackURLs;
-(NSArray *)browserSurfaces;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
-(MNBusinessButtonAttribution *)attribution;
-(FBMemExternalUrl *)externalURL;
@end

