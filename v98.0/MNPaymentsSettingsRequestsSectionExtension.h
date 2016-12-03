/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/FBPaymentsSettingsSectionExtension.h>

@protocol FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate, FBModalWebFlowDelegate;
@class MNPaymentsPeerToPeerPaymentRequestCoordinator, FBImageDownloader, FBPaymentsPeerToPeerContactsService, MNPaymentsPeerToPeerRequestStatusModelContainer, NSString, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPeerToPeerFeatureGatingController, FBGraphQLService, MNPaymentsExtensibleFlowMap, MNCDNProfileImageDownloader, NSArray;

@interface MNPaymentsSettingsRequestsSectionExtension : NSObject <MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, FBPaymentsSettingsSectionExtension> {

	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
	FBImageDownloader* _imageDownloader;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	MNPaymentsPeerToPeerRequestStatusModelContainer* _statusModelContainer;
	NSString* _userId;
	long long _directionType;
	FBPaymentsPeerToPeerNavigationCoordinator* _paymentsNavigationCoordinator;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	FBGraphQLService* _graphQLService;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	NSArray* _requestDataModels;
	BOOL _hasMoreData;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBModalWebFlowDelegate> _modalWebFlowDelegate;
	UIEdgeInsets _edgeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalWebFlowDelegate> modalWebFlowDelegate;                     //@synthesize modalWebFlowDelegate=_modalWebFlowDelegate - In the implementation block
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(void)commitEditingStyle:(long long)arg1 forRowAtRowIndex:(unsigned long long)arg2 ;
-(id)titleForDeleteConfirmationButtonForRowAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)interestedDataTypes;
-(id<FBModalWebFlowDelegate>)modalWebFlowDelegate;
-(void)setModalWebFlowDelegate:(id<FBModalWebFlowDelegate>)arg1 ;
-(id)previewingContext:(id)arg1 forRowAtRowIndex:(unsigned long long)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 forRowAtRowIndex:(unsigned long long)arg3 ;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(void)_loadRequestViewModels;
-(void)_updateRequestStateAndViewModelsWithData:(id)arg1 hasMoreData:(BOOL)arg2 ;
-(id)initWithUserId:(id)arg1 directionType:(long long)arg2 graphQLService:(id)arg3 imageDownloader:(id)arg4 contactsService:(id)arg5 extensibleFlowMap:(id)arg6 requestCoordinator:(id)arg7 requestStatusModelContainer:(id)arg8 paymentsNavigationCoordinator:(id)arg9 featureGatingController:(id)arg10 profileImageDownloader:(id)arg11 ;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)tearDown;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(void)setUp;
-(long long)editingStyleForRowAtIndex:(unsigned long long)arg1 ;
@end

