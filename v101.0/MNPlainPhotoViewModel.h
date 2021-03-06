/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNPlainPhotoSource, MNPhotoMetadata;

@interface MNPlainPhotoViewModel : FBValueObject <NSCopying, NSCoding> {

	MNPlainPhotoSource* _source;
	MNPhotoMetadata* _metadata;

}

@property (nonatomic,copy,readonly) MNPlainPhotoSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
-(id)initWithSource:(id)arg1 metadata:(id)arg2 ;
-(MNPlainPhotoSource *)source;
-(MNPhotoMetadata *)metadata;
@end

