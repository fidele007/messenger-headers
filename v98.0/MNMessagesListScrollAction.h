/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagesListScrollAction : NSObject <NSCopying> {

	unsigned long long _subtype;
	BOOL _none_shouldRestoreScrollPosition;
	long long _bottom_sectionIndex;
	long long _specificRow_rowIndex;
	long long _specificRow_targetPosition;

}
+(id)noneWithShouldRestoreScrollPosition:(BOOL)arg1 ;
+(id)specificRowWithRowIndex:(long long)arg1 targetPosition:(long long)arg2 ;
+(id)bottomWithSectionIndex:(long long)arg1 ;
-(void)matchNone:(/*^block*/id)arg1 bottom:(/*^block*/id)arg2 specificRow:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

