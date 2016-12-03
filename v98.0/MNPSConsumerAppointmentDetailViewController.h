/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPSAppointmentCancelViewControllerDelegate.h>
#import <Messenger/MNPSConsumerAppointmentDetailViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MNPSConsumerAppointmentDetailViewControllerDelegate, FBWebImageDownloaderFactoryProtocol;
@class FBProfServicesBookingDataModel, LPPhoneNumber, NSArray, NSString, MNPSScrollView;

@interface MNPSConsumerAppointmentDetailViewController : UIViewController <MNPSAppointmentCancelViewControllerDelegate, MNPSConsumerAppointmentDetailViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _fromWilde;
	id<MNPSConsumerAppointmentDetailViewControllerDelegate> _delegate;
	FBProfServicesBookingDataModel* _dataModel;
	id<FBWebImageDownloaderFactoryProtocol> _downloaderFactory;
	LPPhoneNumber* _parsedNumber;
	NSArray* _rows;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MNPSScrollView * view; 
-(id)initWithDataModel:(id)arg1 delegate:(id)arg2 downloaderFactory:(id)arg3 isModal:(BOOL)arg4 fromWilde:(BOOL)arg5 ;
-(void)cancelViewController:(id)arg1 didCancelAppointment:(id)arg2 messageText:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fb_done:(id)arg1 ;
-(void)detailViewDidTapCancel:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
@end

