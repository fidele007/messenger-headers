/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@class UIView;

@interface CKStatefulViewComponentController : CKComponentController {

	UIView* _statefulView;
	BOOL _mounted;
	id _statefulViewContext;

}
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(id)contextForNewStatefulView:(id)arg1 ;
+(long long)maximumPoolSize:(id)arg1 ;
-(void)didUnmount;
-(void)didMount;
-(void)didUpdateComponent;
-(void)didRemount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)statefulView;
-(BOOL)canRelinquishStatefulView;
-(void)_relinquishStatefulViewIfPossible;
-(void)_presentStatefulView;
-(void)canRelinquishStatefulViewDidChange;
@end

