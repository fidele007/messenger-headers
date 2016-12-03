/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNBookingRequestsDataFetcherDelegate.h>
#import <Messenger/MNBookingRequestsDetailViewControllerDelegate.h>
#import <Messenger/MNPSConsumerAppointmentDetailViewControllerDelegate.h>
#import <Messenger/MNPSLegacyConsumerAppointmentDetailViewControllerDelegate.h>
#import <Messenger/MNBookingRequestsAdminRequestCreationViewControllerDelegate.h>
#import <Messenger/MNPSAppointmentDeclineViewControllerDelegate.h>

@protocol MNNavigationPluginService;
@class NSArray, FBUserSession, UITableView, MNBookingRequestsDataFetcher, UIViewController, MNBookingRequestsViewerContext, FBTransientViewStateManager, NSString;

@interface MNBookingRequestsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNBookingRequestsDataFetcherDelegate, MNBookingRequestsDetailViewControllerDelegate, MNPSConsumerAppointmentDetailViewControllerDelegate, MNPSLegacyConsumerAppointmentDetailViewControllerDelegate, MNBookingRequestsAdminRequestCreationViewControllerDelegate, MNPSAppointmentDeclineViewControllerDelegate> {

	NSArray* _bookingRequests;
	FBUserSession* _userSession;
	UITableView* _tableView;
	MNBookingRequestsDataFetcher* _bookingRequestsDataFetcher;
	BOOL _actsAsPageAdmin;
	unsigned long long _cellType;
	UIViewController* _detailBookingVC;
	MNBookingRequestsViewerContext* _bookingViewerContext;
	NSArray* _statusFilter;
	BOOL _hasFetchedData;
	BOOL _isModal;
	BOOL _fromWilde;
	id<MNNavigationPluginService> _navigationService;
	FBTransientViewStateManager* _viewStateManager;

}

@property (nonatomic,retain) FBTransientViewStateManager * viewStateManager;              //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithUserSession:(id)arg1 pageID:(id)arg2 isModal:(BOOL)arg3 fromWilde:(BOOL)arg4 ;
-(id)initWithUserSession:(id)arg1 bookingViewerContext:(id)arg2 statusFilter:(id)arg3 navigationService:(id)arg4 ;
-(void)didFetchBookingRequestsCount:(unsigned long long)arg1 ;
-(void)didFetchBookingRequestsDetails:(id)arg1 endCursor:(id)arg2 ;
-(void)_didTapDone;
-(void)didCancelNativeBookingRequest;
-(void)detailViewControllerDidTapCancel:(id)arg1 dataModel:(id)arg2 messageText:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)detailViewControllerDidTapDone:(id)arg1 ;
-(void)consumerAppointmentDetailViewController:(id)arg1 didCancelAppointment:(id)arg2 messageText:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)consumerAppointmentDetailViewControllerDone:(id)arg1 ;
-(void)declineViewController:(id)arg1 didDeclineAppointment:(id)arg2 messageText:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)appointmentDeclineViewControllerDone:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 bookingViewerContext:(id)arg2 statusFilter:(id)arg3 isModal:(BOOL)arg4 fromWilde:(BOOL)arg5 navigationService:(id)arg6 ;
-(void)_fetchBookingRequests;
-(FBTransientViewStateManager *)viewStateManager;
-(void)didCancelNativeBookingRequestWithDataModel:(id)arg1 ;
-(void)didUpdateBookingRequest;
-(void)setViewStateManager:(FBTransientViewStateManager *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLoad;
@end

