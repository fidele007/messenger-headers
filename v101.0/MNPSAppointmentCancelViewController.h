/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPSAppointmentCancelViewDelegate.h>

@protocol MNPSAppointmentCancelViewControllerDelegate;
@class FBProfServicesBookingDataModel, NSString;

@interface MNPSAppointmentCancelViewController : UIViewController <MNPSAppointmentCancelViewDelegate> {

	id<MNPSAppointmentCancelViewControllerDelegate> _delegate;
	FBProfServicesBookingDataModel* _dataModel;
	NSString* _entryPoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * entryPoint;                   //@synthesize entryPoint=_entryPoint - In the implementation block
+(id)fb_eventName;
+(Class)fb_cancelViewClass;
-(void)setEntryPoint:(NSString *)arg1 ;
-(id)initWithDataModel:(id)arg1 delegate:(id)arg2 ;
-(void)cancelViewDidTap:(id)arg1 ;
-(void)cancelViewDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(NSString *)entryPoint;
@end

