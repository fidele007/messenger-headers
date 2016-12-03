/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, MNWResourceInfo;

@interface MNWSharedDataType : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBMSyncedThreadKey* _threadViewModel_threadKey;
	MNWResourceInfo* _resource_resourceInfo;

}
+(id)resourceWithResourceInfo:(id)arg1 ;
+(id)stickerCollection;
+(id)threadListViewModel;
+(id)threadViewModelWithThreadKey:(id)arg1 ;
-(void)matchThreadListViewModel:(/*^block*/id)arg1 threadViewModel:(/*^block*/id)arg2 resource:(/*^block*/id)arg3 stickerCollection:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

