/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMThreadImageSetterDelegate.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNGroupPhotoUploaderListenerAnnouncer, NSMutableDictionary, NSString;

@interface MNGroupPhotoUploader : NSObject <FBMThreadImageSetterDelegate, FBViewerContextClassProvidable> {

	id<FBProvider> _threadImageSetterProvider;
	MNGroupPhotoUploaderListenerAnnouncer* _announcer;
	NSMutableDictionary* _threadImageSetters;
	NSMutableDictionary* _groupThreadKeyImages;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)uploadingImageForGroupThreadKey:(id)arg1 ;
-(void)cancelImageUploadForGroupThreadKey:(id)arg1 ;
-(void)uploadImage:(id)arg1 forGroupThreadKey:(id)arg2 ;
-(void)threadImageSetter:(id)arg1 didSetGroupThreadKeyImage:(id)arg2 ;
-(void)threadImageSetter:(id)arg1 couldNotSetImageForGroupThreadKey:(id)arg2 withError:(id)arg3 ;
-(void)deleteFailedImageForGroupThreadKey:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

