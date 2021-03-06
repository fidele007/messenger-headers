/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, FBUserSession, MNProfileImageViewController, MNThreadImageManager, MNAppThemeConfiguration, NSString;

@interface MNGroupsRoomsCreateViewCoAdminsSectionControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	id<MNModalPresentation> _modalPresenter;
	MNAppThemeConfiguration* _appThemeConfiguration;

}

@property (nonatomic,readonly) FBUserSession * session;                                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;              //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                              //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                 //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNAppThemeConfiguration * appThemeConfiguration;                        //@synthesize appThemeConfiguration=_appThemeConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)nonCachedTopContactsRetriever;
-(id)nonCachedCoAdminsPeoplePickerViewController;
-(MNProfileImageViewController *)profileImageViewController;
-(MNThreadImageManager *)threadImageManager;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNAppThemeConfiguration *)appThemeConfiguration;
-(id<MNModalPresentation>)modalPresenter;
-(FBUserSession *)session;
@end

