/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface MNAppLinkBuilder : NSObject {

	NSString* _title;
	NSURL* _href;
	NSURL* _url;
	BOOL _appLinkSupported;
	BOOL _appInstalled;
	BOOL _siteIntegrityApproved;
	long long _appStoreId;
	NSURL* _appStoreUrl;

}
+(id)appLinkFromExistingAppLink:(id)arg1 ;
+(id)appLink;
-(id)withHref:(id)arg1 ;
-(id)withUrl:(id)arg1 ;
-(id)withAppLinkSupported:(BOOL)arg1 ;
-(id)withAppInstalled:(BOOL)arg1 ;
-(id)withSiteIntegrityApproved:(BOOL)arg1 ;
-(id)withAppStoreId:(long long)arg1 ;
-(id)withAppStoreUrl:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end
