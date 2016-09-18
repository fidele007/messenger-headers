/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDeferredComputation.h>

@class NSString;

@interface FBDeferredMapComputation : NSObject <FBDeferredComputation> {

	/*^block*/id _mapBlock;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) id mapBlock;                     //@synthesize mapBlock=_mapBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMapBlock:(/*^block*/id)arg1 ;
-(id)mapBlock;
-(unsigned long long)type;
@end
