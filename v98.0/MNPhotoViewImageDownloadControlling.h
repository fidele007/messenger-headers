/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPhotoViewImageDownloadControlling <NSObject>
@required
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 imageFlags:(unsigned long long)arg4 animated:(BOOL)arg5 keepCurrentImage:(BOOL)arg6 skipMiniPreview:(BOOL)arg7 analyticsTags:(id)arg8 callbackQueue:(id)arg9 successBlock:(/*^block*/id)arg10 failureBlock:(/*^block*/id)arg11;
-(void)clearPhotoView:(id)arg1;
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 animated:(BOOL)arg4 analyticsTags:(id)arg5;

@end

