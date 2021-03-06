/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelUpdateMonitorListening.h>

@protocol MNThreadViewModelUpdateMonitorListening;
@class FBMThreadKey, NSString;

@interface MNThreadViewModelMonitorFilterer : NSObject <MNThreadViewModelUpdateMonitorListening> {

	FBMThreadKey* _threadKey;
	id<MNThreadViewModelUpdateMonitorListening> _targetListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithThreadKey:(id)arg1 targetListener:(id)arg2 ;
-(void)viewModelForThreadSummaryWithKeyWasUpdated:(id)arg1 isDueToViewerAction:(BOOL)arg2 ;
-(void)threadWithKeyWasDeleted:(id)arg1 isDueToViewerAction:(BOOL)arg2 ;
-(void)messageSetForThreadWithKeyWasUpdated:(id)arg1 isDueToIncomingMessageInsert:(BOOL)arg2 ;
-(void)allSecureThreadsWereUpdated;
@end

