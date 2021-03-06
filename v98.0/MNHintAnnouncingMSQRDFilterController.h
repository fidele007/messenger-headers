/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPMSQRDFilterDelegate.h>
#import <Messenger/FBCaptureCoordinatorFilterController.h>

@protocol MNMediaFilterDescribing;
@class MNMediaFilterHintsListenerAnnouncer, FBMPMSQRDFilter, NSString;

@interface MNHintAnnouncingMSQRDFilterController : NSObject <FBMPMSQRDFilterDelegate, FBCaptureCoordinatorFilterController> {

	MNMediaFilterHintsListenerAnnouncer* _filterHintAnnouncer;
	BOOL _filterHintNeedsFaceDetection;
	mutex _filterHintNeedsFaceDetectionLock;
	FBMPMSQRDFilter* _filter;
	id<MNMediaFilterDescribing> _filterDescriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_listener:(id)arg1 announceRequiresFaceDetectionHint:(BOOL)arg2 ;
-(void)msqrdFilter:(id)arg1 didChangeFaceDetected:(BOOL)arg2 ;
-(void)msqrdFilterFailedToConfigureFaceTracker:(id)arg1 ;
-(id)initWithFilter:(id)arg1 descriptor:(id)arg2 ;
-(void)addHintListener:(id)arg1 ;
-(void)removeHintListener:(id)arg1 ;
@end

