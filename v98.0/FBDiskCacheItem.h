/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSNumber, NSDate, NSData;

@interface FBDiskCacheItem : NSObject {

	const DiskCacheItem* _diskCacheItem;

}

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * fileName; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,readonly) BOOL hasInlineData; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,copy,readonly) NSDate * lastAccessDate; 
@property (nonatomic,copy,readonly) NSData * extra; 
-(NSData *)extra;
-(id)initWithDiskCacheItem:(const DiskCacheItem*)arg1 ;
-(BOOL)hasInlineData;
-(NSNumber *)size;
-(NSString *)key;
-(NSDate *)modificationDate;
-(NSDate *)lastAccessDate;
-(NSString *)fileName;
@end

