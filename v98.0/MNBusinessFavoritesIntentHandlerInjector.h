/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNModalPresentation, FBIntentHandler;
@class FBProviderMapData, FBUserSession, MNProfileImageViewController, FBImageDownloader, MNBusinessCTAHandler, MNUserStore, FBMUserInvalidator, NSString;

@interface MNBusinessFavoritesIntentHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	id<MNModalPresentation> _modalPresenter;
	MNProfileImageViewController* _profileImageViewController;
	id<FBIntentHandler> _intentHandler;
	FBImageDownloader* _imageDownloader;
	MNBusinessCTAHandler* _ctaHandler;
	MNUserStore* _userStore;
	FBMUserInvalidator* _userInvalidator;

}

@property (nonatomic,readonly) FBUserSession * session;                                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                 //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;              //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                      //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * imageDownloader;                                    //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) MNBusinessCTAHandler * ctaHandler;                                      //@synthesize ctaHandler=_ctaHandler - In the implementation block
@property (nonatomic,readonly) MNUserStore * userStore;                                                //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,readonly) FBMUserInvalidator * userInvalidator;                                   //@synthesize userInvalidator=_userInvalidator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(MNProfileImageViewController *)profileImageViewController;
-(FBImageDownloader *)imageDownloader;
-(MNUserStore *)userStore;
-(id<FBIntentHandler>)intentHandler;
-(FBMUserInvalidator *)userInvalidator;
-(MNBusinessCTAHandler *)ctaHandler;
-(FBUserSession *)session;
@end

