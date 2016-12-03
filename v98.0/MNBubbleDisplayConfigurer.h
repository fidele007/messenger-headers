/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBubbleDisplayConfiguring.h>

@interface MNBubbleDisplayConfigurer : NSObject <MNBubbleDisplayConfiguring>
-(id)bubbleColorWithThemeColor:(id)arg1 type:(unsigned long long)arg2 highlighted:(BOOL)arg3 ;
-(id)textViewFormatInfoForMessageFromMe:(BOOL)arg1 themeColor:(id)arg2 messageBodyFiltered:(BOOL)arg3 ;
-(id)_incomingBubbleColorWithThemeColor:(id)arg1 highlighted:(BOOL)arg2 ;
-(id)_outgoingBubbleColorWithThemeColor:(id)arg1 highlighted:(BOOL)arg2 lightness:(double)arg3 ;
-(id)_outgoingNoPushBubbleColorWithThemeColor:(id)arg1 highlighted:(BOOL)arg2 ;
-(id)_messageTextColorForMessageFromMe:(BOOL)arg1 themeColor:(id)arg2 messageBodyFiltered:(BOOL*)arg3 ;
@end
