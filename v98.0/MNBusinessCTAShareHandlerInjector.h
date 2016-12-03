/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNPluginManager, MNModalPresentation;
@class FBProviderMapData, FBUserSession, MNForwardFlowControllerFactory, MNInboxSuggestedContactsRetriever, MNMultiPeoplePickerViewController, NSString;

@interface MNBusinessCTAShareHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	MNForwardFlowControllerFactory* _forwardFactory;
	MNInboxSuggestedContactsRetriever* _recentContactsRetriever;
	id<MNPluginManager> _pluginManager;
	MNMultiPeoplePickerViewController* _peoplePickerViewController;
	id<MNModalPresentation> _modalPresenter;

}

@property (nonatomic,readonly) FBUserSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNForwardFlowControllerFactory * forwardFactory;                             //@synthesize forwardFactory=_forwardFactory - In the implementation block
@property (nonatomic,readonly) MNInboxSuggestedContactsRetriever * recentContactsRetriever;                 //@synthesize recentContactsRetriever=_recentContactsRetriever - In the implementation block
@property (nonatomic,readonly) id<MNPluginManager> pluginManager;                                           //@synthesize pluginManager=_pluginManager - In the implementation block
@property (nonatomic,readonly) MNMultiPeoplePickerViewController * peoplePickerViewController;              //@synthesize peoplePickerViewController=_peoplePickerViewController - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                      //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(MNMultiPeoplePickerViewController *)peoplePickerViewController;
-(MNInboxSuggestedContactsRetriever *)recentContactsRetriever;
-(MNForwardFlowControllerFactory *)forwardFactory;
-(FBUserSession *)session;
-(id<MNPluginManager>)pluginManager;
@end

