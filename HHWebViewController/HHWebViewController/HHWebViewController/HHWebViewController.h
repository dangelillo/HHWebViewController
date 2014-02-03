//
//  HHWebViewController.h
//  HHWebViewController
//
//  Created by Donald Angelillo on 2/3/14.
//  Copyright (c) 2014 Donald Angelillo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HHWebViewController : UIViewController <UIWebViewDelegate, UIScrollViewDelegate> {
    NSURL *url;
    UIWebView *webView;
    UIToolbar *toolBar;
    BOOL shouldHideNavBarOnScroll;
    BOOL shouldHideStatusBarOnScroll;
    BOOL shouldHideToolBarOnScroll;
    
    int webViewLoadingItems;
    
    float initialContentOffset;
    float previousContentDelta;
    BOOL scrollingDown;
}

@property (nonatomic, strong) NSURL *url;
@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong) UIToolbar *toolBar;
@property (nonatomic, assign) BOOL shouldHideNavBarOnScroll;
@property (nonatomic, assign) BOOL shouldHideStatusBarOnScroll;
@property (nonatomic, assign) BOOL shouldHideToolBarOnScroll;

-(instancetype) initWithURL: (NSURL *) _url;
-(void) loadURL: (NSURL *) _url;

@end
