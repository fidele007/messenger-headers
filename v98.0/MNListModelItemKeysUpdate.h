/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNListModelItemKeysUpdate : NSObject <NSCopying> {

	unsigned long long _subtype;
	id _add;
	id _remove;
	long long _loadMore;

}
+(id)loadMore:(long long)arg1 ;
+(id)reload;
+(id)remove:(id)arg1 ;
+(id)add:(id)arg1 ;
-(void)matchAdd:(/*^block*/id)arg1 remove:(/*^block*/id)arg2 reload:(/*^block*/id)arg3 loadMore:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

