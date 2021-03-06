/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBGraphQLConnectionLoadLocation : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _gapFill_beforeCursor;
	NSString* _gapFill_afterCursor;

}
+(id)gapFillWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 ;
+(id)initial;
+(id)head;
+(id)tail;
-(void)matchInitial:(/*^block*/id)arg1 head:(/*^block*/id)arg2 gapFill:(/*^block*/id)arg3 tail:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

