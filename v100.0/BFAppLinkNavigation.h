/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, BFAppLink;

@interface BFAppLinkNavigation : NSObject {

	NSDictionary* _extras;
	NSDictionary* _appLinkData;
	BFAppLink* _appLink;

}

@property (nonatomic,copy) NSDictionary * extras;                   //@synthesize extras=_extras - In the implementation block
@property (nonatomic,copy) NSDictionary * appLinkData;              //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,retain) BFAppLink * appLink;                   //@synthesize appLink=_appLink - In the implementation block
+(id)defaultResolver;
+(id)resolveAppLinkInBackground:(id)arg1 resolver:(id)arg2 ;
+(id)navigateToURLInBackground:(id)arg1 resolver:(id)arg2 ;
+(id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3 ;
+(id)callbackAppLinkDataForAppWithName:(id)arg1 url:(id)arg2 ;
+(id)resolveAppLinkInBackground:(id)arg1 ;
+(id)navigateToURLInBackground:(id)arg1 ;
+(long long)navigationTypeForLink:(id)arg1 ;
+(void)setDefaultResolver:(id)arg1 ;
+(long long)navigateToAppLink:(id)arg1 error:(id*)arg2 ;
-(void)setExtras:(NSDictionary *)arg1 ;
-(NSDictionary *)extras;
-(void)setAppLinkData:(NSDictionary *)arg1 ;
-(NSDictionary *)appLinkData;
-(id)stringByEscapingQueryString:(id)arg1 ;
-(id)appLinkURLWithTargetURL:(id)arg1 error:(id*)arg2 ;
-(void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3 ;
-(long long)navigate:(id*)arg1 ;
-(long long)navigationType;
-(void)setAppLink:(BFAppLink *)arg1 ;
-(BFAppLink *)appLink;
@end

