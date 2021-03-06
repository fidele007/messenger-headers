/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNConversationStartersExpandState : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _expanded_collapseLabel;
	UIColor* _expanded_labelColor;
	NSString* _collapsed_expandLabel;
	UIColor* _collapsed_labelColor;

}
+(id)cantExpand;
+(id)collapsedWithExpandLabel:(id)arg1 labelColor:(id)arg2 ;
+(id)expandedWithCollapseLabel:(id)arg1 labelColor:(id)arg2 ;
-(void)matchExpanded:(/*^block*/id)arg1 collapsed:(/*^block*/id)arg2 cantExpand:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

