/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQuickPromotionInterstitialDataSource.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@class FBUserSession, MNUserStore, NSString;

@interface MNQuickPromotionInterstitialDataSource : NSObject <FBQuickPromotionInterstitialDataSource, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	MNUserStore* _userStore;

}

@property (nonatomic,retain) FBUserSession * session;               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNUserStore * userStore;               //@synthesize userStore=_userStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nuxIDForQuickPromotionInterstitialViewController:(id)arg1 ;
-(void)setUserStore:(MNUserStore *)arg1 ;
-(MNUserStore *)userStore;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
@end

