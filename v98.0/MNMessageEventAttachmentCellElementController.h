/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDefaultAttachmentCellElementController.h>
#import <Messenger/MNMessageEventAttachmentViewDelegate.h>

@class MNCalendarStore, NSString;

@interface MNMessageEventAttachmentCellElementController : MNDefaultAttachmentCellElementController <MNMessageEventAttachmentViewDelegate> {

	MNCalendarStore* _calendarStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(id)initWithCalendarStore:(id)arg1 ;
-(id)_calendarEventFromMessageEvent:(id)arg1 ;
-(void)didTapMessageEventAttachment:(id)arg1 ;
@end

