/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBFetchedAppSettings : NSObject {

	BOOL _supportsAttribution;
	BOOL _supportsImplicitSdkLogging;
	BOOL _enableLoginTooltip;
	NSString* _serverAppName;
	NSString* _appID;
	NSString* _loginTooltipContent;
	NSDictionary* _dialogConfigs;
	unsigned long long _appEventsFeatureOptions;

}

@property (nonatomic,retain) NSString * appID;                              //@synthesize appID=_appID - In the implementation block
@property (assign) unsigned long long appEventsFeatureOptions;              //@synthesize appEventsFeatureOptions=_appEventsFeatureOptions - In the implementation block
@property (nonatomic,copy) NSString * serverAppName;                        //@synthesize serverAppName=_serverAppName - In the implementation block
@property (assign) BOOL supportsAttribution;                                //@synthesize supportsAttribution=_supportsAttribution - In the implementation block
@property (assign) BOOL supportsImplicitSdkLogging;                         //@synthesize supportsImplicitSdkLogging=_supportsImplicitSdkLogging - In the implementation block
@property (assign) BOOL enableLoginTooltip;                                 //@synthesize enableLoginTooltip=_enableLoginTooltip - In the implementation block
@property (nonatomic,copy) NSString * loginTooltipContent;                  //@synthesize loginTooltipContent=_loginTooltipContent - In the implementation block
@property (nonatomic,copy) NSDictionary * dialogConfigs;                    //@synthesize dialogConfigs=_dialogConfigs - In the implementation block
-(id)initWithAppID:(id)arg1 appEventsFeatureOptions:(unsigned long long)arg2 ;
-(void)setAppEventsFeatureOptions:(unsigned long long)arg1 ;
-(unsigned long long)appEventsFeatureOptions;
-(BOOL)shouldAccessAdvertisingID;
-(NSString *)serverAppName;
-(void)setServerAppName:(NSString *)arg1 ;
-(BOOL)supportsAttribution;
-(void)setSupportsAttribution:(BOOL)arg1 ;
-(BOOL)supportsImplicitSdkLogging;
-(void)setSupportsImplicitSdkLogging:(BOOL)arg1 ;
-(BOOL)enableLoginTooltip;
-(void)setEnableLoginTooltip:(BOOL)arg1 ;
-(NSString *)loginTooltipContent;
-(void)setLoginTooltipContent:(NSString *)arg1 ;
-(NSDictionary *)dialogConfigs;
-(void)setDialogConfigs:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appID;
@end

