package com.usman.bsit_m2_20_48;

import android.view.MenuItem;
import androidx.annotation.NonNull;
import com.google.android.material.navigation.NavigationView;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.LayoutInflater;
import androidx.drawerlayout.widget.DrawerLayout;
import com.google.android.material.navigation.NavigationView;
import android.view.MenuItem;
import androidx.annotation.NonNull;
import android.view.MenuItem;
import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import com.usman.bsit_m2_20_48.HomeFragment;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.Toolbar;





public class MainActivity extends AppCompatActivity implements NavigationView.OnNavigationItemSelectedListener {

    private DrawerLayout drawerLayout;
    private ActionBarDrawerToggle drawerToggle;
    private NavigationView navigationView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        drawerLayout = findViewById(R.id.drawer_layout);
        navigationView = findViewById(R.id.nav_view);

        // Set up the toolbar
        Toolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        drawerToggle = new ActionBarDrawerToggle(this, drawerLayout, toolbar, R.string.drawer_open, R.string.drawer_close);
        drawerLayout.addDrawerListener(drawerToggle);
        drawerToggle.syncState();

        // Handle navigation view item clicks
        navigationView.setNavigationItemSelectedListener(new NavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                // Handle your navigation menu item clicks here
                drawerLayout.closeDrawers();
                return true;
            }
        });

        // Display the default fragment
        getSupportFragmentManager().beginTransaction().replace(R.id.content_frame, new HomeFragment()).commit();
    }

    @Override
    public boolean onNavigationItemSelected(@NonNull MenuItem item) {
        int id = item.getItemId();

        Fragment fragment = null;
        String fragmentTag = null;
        switch (id) {
            case R.id.menu_home:
                fragment = new HomeFragment();
                fragmentTag = "Home";
                break;
            case R.id.menu_gallery:
                fragment = new GalleryFragment();
                fragmentTag = "Gallery";
                break;
            case R.id.menu_settings:
                fragment = new SettingsFragment();
                fragmentTag = "Settings";
                break;
        }

        if (fragment != null) {
            getSupportFragmentManager().beginTransaction()
                    .replace(R.id.content_frame, fragment, fragmentTag)
                    .commit();
        }

        drawerLayout.closeDrawers();
        return true;
    }

    // Handle the navigation drawer open and close events
    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        if (drawerToggle.onOptionsItemSelected(item)) {
            return true;
        }
        return super.onOptionsItemSelected(item);
    }
}
