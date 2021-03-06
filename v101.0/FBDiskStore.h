/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURL;

@interface FBDiskStore : NSObject {

	shared_ptr<facebook::mobile::xplat::compactdisk::UnmanagedStore>* _unmanagedStore;
	NSURL* _URL;

}

@property (nonatomic,retain,readonly) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSize; 
-(id)initWithStore:(shared_ptr<facebook::mobile::xplat::compactdisk::UnmanagedStore>*)arg1 ;
-(unsigned long long)maxSize;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
@end

