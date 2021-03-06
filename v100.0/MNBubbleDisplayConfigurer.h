/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBubbleDisplayConfiguring.h>

@interface MNBubbleDisplayConfigurer : NSObject <MNBubbleDisplayConfiguring>
-(id)_incomingBubbleColorWithThemeColor:(id)arg1 highlighted:(BOOL)arg2 ;
-(id)_outgoingBubbleColorWithThemeColor:(id)arg1 highlighted:(BOOL)arg2 lightness:(double)arg3 ;
-(id)_outgoingNoPushBubbleColorWithThemeColor:(id)arg1 highlighted:(BOOL)arg2 ;
-(id)_messageTextColorForMessageFromMe:(BOOL)arg1 themeColor:(id)arg2 messageBodyFiltered:(BOOL*)arg3 ;
-(id)bubbleColorWithThemeColor:(id)arg1 type:(unsigned long long)arg2 highlighted:(BOOL)arg3 ;
-(id)textViewFormatInfoForMessageFromMe:(BOOL)arg1 themeColor:(id)arg2 messageBodyFiltered:(BOOL)arg3 ;
@end

