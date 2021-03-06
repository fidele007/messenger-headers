/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPhotoViewModel, MNImage, NSURL, UIImage;

@interface MNPhotoPreviewingData : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNPhotoViewModel* _photoViewModel_photoViewModel;
	MNImage* _photoViewModel_placeholderImage;
	NSURL* _photoURL_uRL;
	UIImage* _photoURL_placeholderImage;

}
+(id)photoViewModelWithPhotoViewModel:(id)arg1 placeholderImage:(id)arg2 ;
+(id)photoURLWithURL:(id)arg1 placeholderImage:(id)arg2 ;
-(void)matchPhotoViewModel:(/*^block*/id)arg1 photoURL:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

